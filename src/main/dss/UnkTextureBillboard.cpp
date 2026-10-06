#include "main/dss/Billboard.hpp"
#include "main/cmn/CommonEffectData.hpp"

ARM void UnkTextureBillboard::unkfunc_02058680(const BillboardVertex* vertex, const BillboardTexCoord* texCoord, void* texture)
{
    texture_ = texture;
    func_02086798(texture, 1);
    func_020840c8(this, vertex);
    func_0208413c(this, texCoord);
    RenderObject::texture_ = texture_;
}

ARM void UnkTextureBillboard::unkfunc_020586c4()
{
    func_02086868(texture_);
}

ARM void UnkTextureBillboard::unkfunc_020586d4(int a)
{
    func_020869ec(texture_, (void*)a, 0);
}
