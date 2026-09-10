// Address: 005c1d6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1d6c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_005c1e1a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x5c1d93;
  local_8 = param_1;
  cVar2 = FUN_005c1a78(param_1);
  if (cVar2 == '\x01') {
    *(undefined4 *)(local_8 + 0x28c) = 0;
  }
  else {
    puStack_20 = (undefined1 *)0x5c1da2;
    FUN_005c1c0c(local_8,&local_c);
    puStack_20 = (undefined1 *)local_c;
    puStack_24 = (undefined1 *)0x5c1dae;
    uVar3 = FUN_005c1a78(local_8);
    puVar1 = puStack_20;
    puStack_20 = (undefined1 *)0x5c1db6;
    uVar3 = FUN_004d3548(puVar1,uVar3);
    *(undefined4 *)(local_8 + 0x28c) = uVar3;
  }
  puStack_24 = &LAB_005c1dfd;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_0044c6fc(local_8,param_2);
  *in_FS_OFFSET = uStack_28;
  *(undefined4 *)(local_8 + 0x28c) = 0;
  return;
}

