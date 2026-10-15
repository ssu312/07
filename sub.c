extern int all_files;
void sub(void) //static void sub(void) => 링킹에러
{
    all_files = 10;
}