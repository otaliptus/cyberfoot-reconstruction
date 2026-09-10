// Address: 00431f00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431f00(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  
  puStack_1c = (undefined1 *)0x431f18;
  FUN_00431ee8(param_1);
  puStack_20 = &LAB_00431fa1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  for (local_c = *(undefined4 **)(param_1 + 4);
      (local_c != (undefined4 *)0x0 && ((param_2 != local_c[2] || (param_3 != local_c[3]))));
      local_c = (undefined4 *)*local_c) {
  }
  puStack_1c = &stack0xfffffffc;
  if (local_c == (undefined4 *)0x0) {
    puStack_1c = &stack0xfffffffc;
    puVar2 = (undefined4 *)FUN_004027fc(0x10);
    *puVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = FUN_00431fb4(param_1,param_2,param_3);
    puVar2[1] = uVar3;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00431fa8;
  puStack_20 = (undefined1 *)0x431fa0;
  FUN_00431ef4(param_1,uStack_24,puVar1);
  return;
}

