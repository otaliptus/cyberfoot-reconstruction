// Address: 004f79c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f79c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_004f7890(param_1,param_2);
  if ((char)param_3 != *(char *)(iVar2 + 0xc)) {
    iVar2 = FUN_004f7890(param_1,param_2);
    *(char *)(iVar2 + 0xc) = (char)param_3;
    FUN_005118f0(param_1,param_2,0);
    FUN_004f7890(param_1,param_2);
    cVar1 = FUN_004f5960();
    if (cVar1 != '\0') {
      iVar2 = FUN_004f7890(param_1,param_2);
      FUN_004f7e68(param_1,param_2,*(undefined4 *)(iVar2 + 4),param_3);
    }
    FUN_00403c80(param_1,param_2);
  }
  return;
}

