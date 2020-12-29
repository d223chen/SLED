#define SLED 64
#define WROTE_TO_SLED 1
#define WROTE_TO_MEM 2
#define NOT_ENOUGH_ARGUMENTS 100


int main(int argc, char *argv[]){
  if(argc < 3){
    return NOT_ENOUGH_ARGUMENTS;
  }
  int *address = (int *)argv[1];
  int value = *(int *)argv[2];
  if((int)address < SLED){
    int *v = address;
    *v = value;
    return WROTE_TO_SLED;
  }
  else{
    int *v = address;
    *v = value;
    return WROTE_TO_MEM;
  }
  return 0;
}
