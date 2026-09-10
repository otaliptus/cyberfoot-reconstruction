// Address: 00443408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00443408(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  if ((param_2 == '\0') || ((*(byte *)(param_1 + 7) & 1) == 0)) {
    if ((char)param_1[0x28] != param_2) {
      *(char *)(param_1 + 0x28) = param_2;
      local_9 = param_2;
      local_8 = param_1;
      if (-1 < *(int *)(param_1[0x14] + 8) + -1) {
        local_10 = 0;
        local_14 = *(int *)(param_1[0x14] + 8);
        do {
          puStack_18 = (undefined1 *)0x44347d;
          uVar2 = FUN_0041e01c(local_8[0x14],local_10);
          puStack_18 = (undefined1 *)0x443488;
          cVar1 = FUN_00403c10(uVar2,PTR_PTR_00442dd8);
          if (cVar1 != '\0') {
            *(undefined1 *)(local_8 + 0x2c) = 1;
            puStack_1c = &LAB_004434d5;
            uStack_20 = *in_FS_OFFSET;
            *in_FS_OFFSET = &uStack_20;
            puStack_18 = &stack0xfffffffc;
            piVar3 = (int *)FUN_0041e01c(local_8[0x14],local_10);
            (**(code **)(*piVar3 + 0x80))(piVar3,local_9);
            *in_FS_OFFSET = uStack_20;
            *(undefined1 *)(local_8 + 0x2c) = 0;
            return;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      puStack_18 = (undefined1 *)0x4434ec;
      (**(code **)(*local_8 + 0x30))();
      if (local_8[0x32] != -1) {
        puStack_18 = (undefined1 *)0x443504;
        FUN_00443574(local_8,local_8[0x32]);
      }
    }
  }
  else {
    *(char *)((int)param_1 + 0xa1) = param_2;
  }
  return;
}

