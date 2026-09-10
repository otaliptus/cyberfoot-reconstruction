// Address: 004a1bac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a1bac(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    if ((piVar1[2] == 0) || (*piVar1 == 10)) {
      if (*piVar1 == 10) {
        uVar2 = FUN_0049de50(0,0,0);
        iVar3 = FUN_0049de50(uVar2,param_2,param_3);
        if (iVar3 != piVar1[6]) {
          return 0xfffffffd;
        }
      }
      iVar3 = FUN_004a059c(param_1,*(undefined4 *)(param_1 + 0x10));
      if (iVar3 == 0) {
        if ((uint)piVar1[10] < param_3) {
          FUN_0049de20();
          piVar1[0xb] = piVar1[10];
        }
        else {
          FUN_0049de20();
          piVar1[0xb] = param_3;
        }
        piVar1[3] = 1;
        uVar2 = 0;
      }
      else {
        *piVar1 = 0x1c;
        uVar2 = 0xfffffffc;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

