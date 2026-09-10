// Address: 004f0fe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004f0fe4(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x14))();
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x2b4) + 0x14))();
    cVar1 = FUN_00432488(param_2,0,iVar2 + -1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

