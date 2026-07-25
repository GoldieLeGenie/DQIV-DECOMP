#include "main/param/Fukuro.hpp"

char player_fukuro1[36] = "data/param/param_player_fukuro1.dat"; // 0x020bc5cc

THUMB param::Fukuro *param::Fukuro::getFileData(unsigned int index)
{
    char *name;
    if (index < 0x15B)
        name = player_fukuro1;

    int id = func_02057f58(data_020c7980, name);
    param::Fukuro *data = (param::Fukuro*)func_02057f50(id, 0x02CE0284);

    unsigned int i = 0;
    do
    {
        if (index == data->index)
            return data;
        i++;
        data++;
    } while (i < 0x15B);
    return data;
}