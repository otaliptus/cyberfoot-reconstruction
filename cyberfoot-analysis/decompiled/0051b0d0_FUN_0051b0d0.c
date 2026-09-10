// Address: 0051b0d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051b0d0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined2 local_e;
  undefined1 local_c;
  undefined2 local_b;
  undefined1 local_9;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_0051b193;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  bVar2 = FUN_00522848(*(undefined4 *)(param_1 + 4));
  if (bVar2 == 0) {
    FUN_00406d44(&PTR_DAT_0051666c,&local_14);
    FUN_00516934(local_14);
  }
  local_e = DAT_0051b1a0;
  local_c = DAT_0051b1a2;
  local_b = *(undefined2 *)((int)&DAT_00669cd8 + (uint)bVar2 * 3 + 1);
  local_9 = *(undefined1 *)((int)&DAT_00669cd8 + (uint)bVar2 * 3 + 3);
  FUN_0051b090(param_1);
  (**(code **)(*local_8 + 0x10))(local_8,&local_e,6);
  (**(code **)(*local_8 + 0x10))(local_8,param_1 + 8,7);
  if ((*(byte *)(param_1 + 0xc) & 0x80) == 0x80) {
    FUN_0051a0ec(*(undefined4 *)(param_1 + 0x10),local_8);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0051b19a;
  puStack_24 = (undefined1 *)0x51b192;
  FUN_004048d4(&local_14,uStack_28,puVar1);
  return;
}

