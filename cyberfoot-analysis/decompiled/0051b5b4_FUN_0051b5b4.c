// Address: 0051b5b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051b5b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined3 uStack_8;
  byte local_5;
  
  puStack_1c = &stack0xfffffffc;
  uStack_8 = 0;
  local_5 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_0051b880;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*(char *)(param_4 + -0x103) != '\0') {
    *(undefined1 *)(param_4 + -0x103) = 0;
    puStack_1c = &stack0xfffffffc;
    goto LAB_0051b865;
  }
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_4 + -0x110) <= *(int *)(param_4 + -0x10c) + param_1) {
    if (*(char *)(param_4 + -0x111) != '\0') {
      puStack_1c = &stack0xfffffffc;
      if (*(int *)(param_4 + -0x110) <= *(int *)(param_4 + -0x10c)) {
        puStack_1c = &stack0xfffffffc;
        FUN_00406d44(&PTR_DAT_005166a4,&local_c);
        (**(code **)(**(int **)(param_4 + -0x118) + 0x10))(*(int **)(param_4 + -0x118),1,local_c);
      }
      goto LAB_0051b865;
    }
    *(undefined1 *)(param_4 + -0x102) =
         *(undefined1 *)(param_4 + -0x104 + *(int *)(param_4 + -0x11c));
    *(undefined1 *)(param_4 + -0x101) =
         *(undefined1 *)(param_4 + -0x103 + *(int *)(param_4 + -0x11c));
    iVar4 = (**(code **)(**(int **)(param_4 + -0x120) + 0xc))
                      (*(int **)(param_4 + -0x120),&local_5,1);
    if (iVar4 != 1) goto LAB_0051b865;
    if (local_5 == 0) {
      *(undefined1 *)(param_4 + -0x121) = 1;
      *(undefined1 *)(param_4 + -0x111) = 1;
    }
    else {
      uVar5 = (**(code **)**(undefined4 **)(param_4 + -0x120))();
      uVar6 = FUN_004208d4(*(undefined4 *)(param_4 + -0x120));
      if (extraout_EDX - extraout_EDX_00 == (uint)(uVar5 < uVar6)) {
        if (uVar5 - uVar6 < (uint)local_5) {
LAB_0051b70f:
          FUN_00406d44(&PTR_DAT_00516654,&local_10);
          (**(code **)(**(int **)(param_4 + -0x118) + 0x10))(*(int **)(param_4 + -0x118),1,local_10)
          ;
          cVar2 = (**(code **)**(undefined4 **)(param_4 + -0x120))();
          cVar3 = FUN_004208d4(*(undefined4 *)(param_4 + -0x120));
          local_5 = cVar2 - cVar3;
        }
      }
      else if ((int)((extraout_EDX - extraout_EDX_00) - (uint)(uVar5 < uVar6)) < 0)
      goto LAB_0051b70f;
      if (local_5 != 0) {
        FUN_005169f8(*(undefined4 *)(param_4 + -0x120),param_4 + -0x100,local_5);
      }
    }
    *(uint *)(param_4 + -0x11c) = local_5 + 2;
    *(int *)(param_4 + -0x10c) = (*(int *)(param_4 + -0x10c) - *(int *)(param_4 + -0x110)) + 0x10;
    *(int *)(param_4 + -0x110) = *(int *)(param_4 + -0x11c) << 3;
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  *(int *)(param_4 + -0x10c) = *(int *)(param_4 + -0x10c) + param_1;
LAB_0051b865:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0051b887;
  puStack_20 = (undefined1 *)0x51b87f;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

