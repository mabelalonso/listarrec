#include <sys/stat.h>
#include "../incl/tipo_archivo.h"

const char* obtener_sufijo_archivo(const char *ruta_completa) {
    struct stat sb;

    if (lstat(ruta_completa, &sb) == -1) return "";

    if (S_ISDIR(sb.st_mode)) return "/";           /* Directorio */
    if (S_ISLNK(sb.st_mode)) return "->";          /* Liga simbólica */
    if (S_ISBLK(sb.st_mode)) return "*b";          /* Dispositivo de bloque */
    if (S_ISCHR(sb.st_mode)) return "*c";          /* Dispositivo de carácter */
    if (S_ISREG(sb.st_mode) && (sb.st_mode & 0111)) return "*"; /* Programa ejecutable */

    return "";
}