// Address: 0050e574
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050e574(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  iVar3 = 0;
  if (param_3 != param_2) {
    local_14 = param_2;
    local_10 = param_3;
    if (param_3 < param_2) {
      FUN_004e2ebc(&local_10,&local_14);
    }
    iVar2 = local_14;
    if (local_14 < local_10) {
      do {
        cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
        if (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_10);
    }
  }
  return iVar3;
}

