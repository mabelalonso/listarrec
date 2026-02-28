#include "../incl/listarrec.h"
#include "../incl/tipo_archivo.h"

int procesaarchivo(const char *archivo,const struct stat *metadata,int tipo)
{
    switch (tipo)
    {
        case FTW_NS:
            break;
        default:
            /* Se imprime el inodo, el archivo y se concatena el sufijo */
            printf("%i\t%-s%s\n", (int)metadata->st_ino, archivo, obtener_sufijo_archivo(archivo));
            break;
    }
    return 0;
}