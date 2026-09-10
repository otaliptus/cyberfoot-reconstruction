// Address: 0051a2e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a2e0(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_0051a088(param_1);
  if (param_3 != 0) {
    FUN_0051a1fc(param_1,param_3);
    if (-1 < param_3 + -1) {
      iVar3 = 0;
      iVar4 = param_3;
      do {
        puVar1 = (undefined1 *)(param_1[1] + iVar3 * 3);
        puVar2 = (undefined1 *)(param_2 + iVar3 * 4);
        *puVar1 = puVar2[2];
        puVar1[1] = puVar2[1];
        puVar1[2] = *puVar2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[2] = param_3;
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}

