// Address: 0046795c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_0046795c(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = *param_2;
  local_1c = *param_3;
  cVar1 = FUN_00467238(param_1,&local_20,&local_1c);
  if (cVar1 != '\0') {
    local_18 = local_20;
    local_14 = local_1c;
    if (((*(char *)(param_1 + 0x5c) == '\0') ||
        (((cVar1 = FUN_004671cc(param_1,&local_18,&local_14), cVar1 != '\0' &&
          (local_18 == local_20)) && (local_14 == local_1c)))) ||
       (cVar1 = FUN_00467238(param_1,&local_18,&local_14), cVar1 != '\0')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if (cVar1 != '\0') {
      *param_2 = local_18;
      *param_3 = local_14;
    }
    return cVar1;
  }
  return '\0';
}

