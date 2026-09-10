// Address: 0048b13c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048b13c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_29c;
  undefined1 *puStack_298;
  undefined1 *puStack_294;
  undefined1 local_28c [184];
  undefined1 local_1d4 [8];
  undefined4 local_1cc;
  undefined4 local_164;
  undefined4 local_160;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    puStack_294 = (undefined1 *)0x48b15b;
    FUN_0048af30(param_1,local_28c);
    puStack_298 = &LAB_0048b1bb;
    uStack_29c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_29c;
    local_1cc = 0;
    puStack_294 = &stack0xfffffffc;
    FUN_0048dbd4(local_1d4);
    *(undefined4 *)(param_1 + 0x30) = local_164;
    *(undefined4 *)(param_1 + 0x34) = local_160;
    iVar2 = FUN_0048c3d4(local_1d4);
    puVar1 = puStack_294;
    *(char *)(param_1 + 0x41) = '\x01' - (iVar2 == 0);
    *in_FS_OFFSET = uStack_29c;
    puStack_294 = (undefined1 *)0x48b1c2;
    puStack_298 = (undefined1 *)0x48b1ba;
    FUN_0048af0c(local_28c,uStack_29c,puVar1);
    return;
  }
  return;
}

