// Address: 0049ae38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049ae38(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x24);
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    puVar4 = (undefined1 *)*param_2;
    param_2 = param_2 + 1;
    puVar3 = *(undefined1 **)(*param_3 + param_5 * 4);
    uVar5 = 0;
    param_5 = param_5 + 1;
    if (uVar1 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + iVar2;
      } while (uVar5 < uVar1);
    }
  }
  return;
}

