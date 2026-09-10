// Address: 004bcce0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bcce0(int param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  piVar2 = (int *)(param_4 + -0x10);
  *piVar2 = 0;
  do {
    if (param_1 < param_2) {
      do {
        if (param_2 - param_1 < 8) {
          param_3 = &stack0xfffffffc;
          FUN_004bcac4(param_1,param_2);
          break;
        }
        puVar3 = param_4;
        FUN_004bca2c(param_1,param_2,param_3);
        iVar1 = FUN_004bcbb8(param_1,param_2,puVar3,&stack0xfffffffc);
        if (param_2 - iVar1 < iVar1 - param_1) {
          *piVar2 = *piVar2 + 1;
          *(int *)(param_4 + *piVar2 * 4 + -0x1a4) = param_1;
          *piVar2 = *piVar2 + 1;
          *(int *)(param_4 + *piVar2 * 4 + -0x1a4) = iVar1;
          param_1 = iVar1 + 1;
          iVar1 = param_2;
        }
        else {
          *piVar2 = *piVar2 + 1;
          *(int *)(param_4 + *piVar2 * 4 + -0x1a4) = iVar1 + 1;
          *piVar2 = *piVar2 + 1;
          *(int *)(param_4 + *piVar2 * 4 + -0x1a4) = param_2;
        }
        param_3 = param_4;
        param_2 = iVar1;
      } while (param_1 < iVar1);
    }
    if (*piVar2 == 0) {
      return;
    }
    param_2 = *(int *)(param_4 + *piVar2 * 4 + -0x1a4);
    *piVar2 = *piVar2 + -1;
    param_1 = *(int *)(param_4 + *piVar2 * 4 + -0x1a4);
    *piVar2 = *piVar2 + -1;
  } while( true );
}

