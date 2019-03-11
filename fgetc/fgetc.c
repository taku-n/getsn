#include <stdio.h>

main() {

      int ret , get_ch;

        ret = feof( stdin );
          if( ret == 0 ) {
                  printf( "標準入力はEOFではありません。\n" );
                    }

            while(( get_ch = fgetc( stdin )) != EOF ) {
                    printf( "get_ch=0x%02x\n" , get_ch );
                      }

              ret = feof( stdin );
                if( ret != 0 ) {
                        printf( "標準入力はEOFです。\n" );
                          }
}
