// Address: 0050ed44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050ed44(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0050ae9c(param_1[0x135]);
  if (0 < iVar2) {
    iVar2 = FUN_0050ae9c(param_1[0x135]);
    cVar1 = FUN_00432488(param_2,0,iVar2 + -1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x20c))(param_1,param_2,param_1[0x13f],0,1,DAT_0050ed98);
    }
  }
  return;
}

