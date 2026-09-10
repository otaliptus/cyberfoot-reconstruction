// Address: 0049b14c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049b14c(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((0 < param_4 - param_3) && (iVar3 = 0, 0 < param_2)) {
    do {
      puVar2 = (undefined1 *)(*param_1 + param_3);
      uVar1 = puVar2[-1];
      for (iVar4 = param_4 - param_3; 0 < iVar4; iVar4 = iVar4 + -1) {
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < param_2);
  }
  return;
}

