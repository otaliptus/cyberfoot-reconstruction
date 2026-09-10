// Address: 004202e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004202e8(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int local_14;
  
  if ((char)param_1[7] == '\0') {
    local_14 = param_1[5];
  }
  else {
    local_14 = param_3;
    cVar1 = (**(code **)(*param_1 + 0x8c))(param_1,param_2,&local_14);
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x1d) == '\0') {
        return local_14;
      }
      if (*(char *)((int)param_1 + 0x1d) == '\x02') {
        FUN_0041f4bc(param_1,PTR_PTR_0066af3c,0);
      }
    }
  }
  (**(code **)(*param_1 + 0x88))(param_1,local_14,param_2,param_3);
  return local_14;
}

