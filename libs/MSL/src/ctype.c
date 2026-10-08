#include <ctype.h>

#define alph __msl_alpha
#define blnk __msl_blank
#define cntl __msl_cntrl
#define digi __msl_digit | __msl_graph | __msl_print
#define grph __msl_graph
#define lowc __msl_lower | __msl_alpha | __msl_graph | __msl_print
#define prnt __msl_print
#define punc __msl_punct | __msl_graph | __msl_print
#define spac __msl_space
#define uppc __msl_upper | __msl_alpha | __msl_graph | __msl_print
#define hexd __msl_xdigit
#define dhex hexd | digi
#define uhex hexd | uppc
#define lhex hexd | lowc
#define ctbl cntl | blnk
#define ctsp cntl | spac
#define sblp spac | blnk | prnt
#define csbl cntl | spac | blnk

const unsigned short __ctype_mapC[__msl_cmap_size] = {
    cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, csbl, ctsp, ctsp, ctsp, ctsp, cntl, cntl, cntl, cntl, cntl,
    cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, cntl, sblp, punc, punc, punc, punc, punc,
    punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, dhex, dhex, dhex, dhex, dhex, dhex, dhex, dhex, dhex,
    dhex, punc, punc, punc, punc, punc, punc, punc, uhex, uhex, uhex, uhex, uhex, uhex, uppc, uppc, uppc, uppc, uppc,
    uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, punc, punc, punc, punc,
    punc, punc, lhex, lhex, lhex, lhex, lhex, lhex, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc,
    lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, punc, punc, punc, punc, cntl,
};
