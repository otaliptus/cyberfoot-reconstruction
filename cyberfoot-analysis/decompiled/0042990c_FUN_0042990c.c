// Address: 0042990c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042990c(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x42991d;
  FUN_0042967c(param_1);
  puStack_18 = &LAB_0042996b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &stack0xfffffffc;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puStack_14 = puVar2;
    if (((HGDIOBJ)puVar1[2] != (HGDIOBJ)0x0) && ((int)puVar1[5] < 0)) {
      DeleteObject((HGDIOBJ)puVar1[2]);
      puVar1[2] = 0;
    }
    puVar2 = puStack_14;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00429972;
  puStack_18 = (undefined1 *)0x42996a;
  FUN_00429688(param_1,uStack_1c,puVar2);
  return;
}

