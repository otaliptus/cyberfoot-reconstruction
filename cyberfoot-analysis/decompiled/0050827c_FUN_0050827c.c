// Address: 0050827c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050827c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined3 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined3 uStack_8;
  char local_5;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0050835a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uStack_8 = 0;
  uVar2 = uStack_8;
  uStack_8 = 0;
  local_5 = '\0';
  if (param_1 <= param_2) {
    iVar6 = (param_2 - param_1) + 1;
    puStack_20 = &stack0xfffffffc;
    do {
      cVar3 = (**(code **)(**(int **)(param_4 + -4) + 300))(*(int **)(param_4 + -4),param_1);
      if (cVar3 != '\0') {
        (**(code **)(**(int **)(param_4 + -4) + 0x100))
                  (*(int **)(param_4 + -4),*(undefined4 *)(param_4 + -8),param_1,&local_10);
        uVar7 = local_10;
        uVar4 = FUN_00405260(*(undefined4 *)(param_4 + -0xc));
        FUN_0043cd1c(uVar7,uVar4,&local_c);
        iVar5 = FUN_00409938(local_c,*(undefined4 *)(param_4 + -0xc));
        local_5 = iVar5 == 0;
      }
      if (local_5 != '\0') {
        (**(code **)(**(int **)(param_4 + -4) + 0x1b0))(*(int **)(param_4 + -4),param_1);
        cVar3 = FUN_00514fb0(*(undefined4 *)(param_4 + -4));
        uVar2 = uStack_8;
        if (cVar3 == '\0') {
          FUN_00512eb4(*(undefined4 *)(param_4 + -4),param_1);
          uVar2 = uStack_8;
        }
        break;
      }
      param_1 = param_1 + 1;
      iVar6 = iVar6 + -1;
      uVar2 = uStack_8;
    } while (iVar6 != 0);
  }
  uStack_8 = uVar2;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00508361;
  puStack_24 = (undefined1 *)0x508359;
  FUN_00405008(&local_10,2,puVar1);
  return;
}

