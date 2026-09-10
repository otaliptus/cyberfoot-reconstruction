// Address: 00423ae4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423ae4(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_00423c73;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  uVar2 = FUN_004239d4(param_1);
  switch(uVar2 & 0x7f) {
  case 1:
    FUN_00423a30();
    break;
  case 2:
    FUN_00423edc(local_8,1);
    break;
  case 3:
    FUN_00423edc(local_8,2);
    break;
  case 4:
    FUN_00423edc(local_8,4);
    break;
  case 5:
    FUN_00423edc(local_8,10);
    break;
  case 6:
  case 7:
    FUN_004237f8(local_8,&local_c);
    break;
  case 10:
    FUN_00423a58(1);
    break;
  case 0xb:
    FUN_004239e8(local_8);
    break;
  case 0xc:
    FUN_00423a58(1);
    break;
  case 0xe:
    FUN_00423a88();
    break;
  case 0xf:
    FUN_00423edc(local_8,4);
    break;
  case 0x10:
    FUN_00423edc(local_8,8);
    break;
  case 0x11:
    FUN_00423edc(local_8,8);
    break;
  case 0x12:
    FUN_00423a58(2);
    break;
  case 0x13:
    FUN_00423edc(local_8,8);
    break;
  case 0x14:
    FUN_00423a58(1);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00423c7a;
  puStack_14 = (undefined1 *)0x423c72;
  FUN_004048d4(&local_c,uStack_18,puVar1);
  return;
}

