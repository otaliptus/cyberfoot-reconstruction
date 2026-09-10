// Address: 00429694
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00429694(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  
  puStack_18 = (undefined1 *)0x4296af;
  sVar3 = FUN_00429608(param_2,*(undefined2 *)(param_1 + 0x20));
  puStack_18 = (undefined1 *)0x4296b9;
  FUN_0042967c(param_1);
  puStack_1c = &LAB_00429768;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if (sVar3 == *(short *)(local_c + 3)) {
      cVar2 = FUN_00409658(local_c + 4,param_2,*(undefined2 *)(param_1 + 0x20));
      if (cVar2 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)FUN_004027fc(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *param_2;
    *(short *)(local_c + 3) = sVar3;
    FUN_00402a04(param_2,local_c + 4,*(undefined2 *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  puVar1 = puStack_18;
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042976f;
  puStack_1c = (undefined1 *)0x429767;
  FUN_00429688(param_1,uStack_20,puVar1);
  return;
}

