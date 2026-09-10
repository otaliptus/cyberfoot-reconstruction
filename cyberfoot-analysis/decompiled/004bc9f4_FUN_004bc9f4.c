// Address: 004bc9f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bc9f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0067aae0;
  if (0 < DAT_0067aae0) {
    do {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = DAT_0067aae4;
  if (0 < DAT_0067aae4) {
    do {
      uVar1 = *(undefined1 *)param_1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      *(undefined1 *)param_2 = uVar1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

