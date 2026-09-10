// Address: 004b1960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b1960(int param_1,char param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;
  
  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x4b1972;
    local_8 = param_3;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_24 = (undefined1 *)0x4b1981;
  local_8 = param_3;
  FUN_004068f4(param_3);
  uVar2 = local_8;
  puStack_28 = &LAB_004b19d2;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_4 == 0) {
    puStack_24 = &stack0xfffffffc;
    uVar3 = GdipLoadImageFromStream();
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  else {
    puStack_24 = &stack0xfffffffc;
    uVar3 = GdipLoadImageFromStreamICM();
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uVar2;
  puStack_2c = &LAB_004b19d9;
  FUN_00406880(&local_8,uVar2,puVar1);
  return;
}

