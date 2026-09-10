// Address: 0049ae84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049ae84(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int *local_14;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x1c);
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    local_8 = 0;
    local_14 = param_3;
    if (0 < iVar1) {
      do {
        uVar5 = 0;
        iVar4 = *param_2;
        puVar3 = *(undefined1 **)(*local_14 + param_5 * 4);
        if (uVar2 != 0) {
          do {
            uVar5 = uVar5 + 1;
            *puVar3 = *(undefined1 *)(iVar4 + local_8);
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + iVar1;
          } while (uVar5 < uVar2);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
      } while (local_8 < iVar1);
    }
    param_2 = param_2 + 1;
    param_5 = param_5 + 1;
  }
  return;
}

