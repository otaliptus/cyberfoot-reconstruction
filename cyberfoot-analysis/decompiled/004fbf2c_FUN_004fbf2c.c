// Address: 004fbf2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fbf2c(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_004fbfaf;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x111) == '\x01') {
    piVar2 = (int *)FUN_00403c34(*(undefined4 *)(param_1 + 0x50),PTR_PTR_004ede2c);
    (**(code **)(*piVar2 + 0xf8))(piVar2,&local_c);
    FUN_00404b6c(&local_8,local_c);
    iVar3 = (**(code **)(*(int *)piVar2[0xad] + 0x54))((int *)piVar2[0xad],local_8);
    puVar1 = puStack_14;
    if (iVar3 != -1) {
      FUN_004f0798(piVar2,iVar3);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004fbfb6;
  puStack_18 = (undefined1 *)0x4fbfa6;
  FUN_00404ff0(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x4fbfae;
  FUN_004048d4(&local_8);
  return;
}

