// Address: 0064dfd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064dfd4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0064e686;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_3;
  FUN_004048d4(&local_c);
  iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + param_2 * 0x130));
  iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x1c + param_2 * 0x130);
  if (iVar2 == 0) {
    if ((((iVar3 == 0x61) || (iVar3 == 0x3e)) || (iVar3 == 100)) ||
       ((iVar3 == 0x65 || (iVar3 == 0x91)))) {
      iVar3 = FUN_004032c8(0x7bc);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2206) * 0x15);
    }
    else if ((iVar3 == 3) || (iVar3 == 0xf)) {
      iVar3 = FUN_004032c8(0x483);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2a76) * 0x15);
    }
    else if (iVar3 == 0x68) {
      iVar3 = FUN_004032c8(0x6a4);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2ef9) * 0x15);
    }
    else if (iVar3 == 0x48) {
      iVar3 = FUN_004032c8(0x385);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x359e) * 0x15);
    }
    else if (iVar3 == 0x55) {
      iVar3 = FUN_004032c8(0x726);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x3923) * 0x15);
    }
    else if (iVar3 == 0x9a) {
      iVar3 = FUN_004032c8(0xdc8);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x404a) * 0x15);
    }
    else if (((iVar3 == 0x8e) || (iVar3 == 0x46)) || ((iVar3 == 0xb3 || (iVar3 == 0x36)))) {
      iVar3 = FUN_004032c8(0x53c);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x4e12) * 0x15);
    }
    else if ((((iVar3 == 0xa2) || (iVar3 == 0xc1)) || (iVar3 == 0xc)) || (iVar3 == 0x19)) {
      iVar3 = FUN_004032c8(0x595);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x534f) * 0x15);
    }
    else if (((iVar3 == 0x9f) || (iVar3 == 0x98)) ||
            ((iVar3 == 0x58 || ((iVar3 == 0x3f || (iVar3 == 0x40)))))) {
      iVar3 = FUN_004032c8(0x4e9);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x58e4) * 0x15);
    }
    else if ((iVar3 == 0x34) || (((iVar3 == 0x1b || (iVar3 == 0xab)) || (iVar3 == 0x6e)))) {
      iVar3 = FUN_004032c8(0x6ee);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x5dcd) * 0x15);
    }
    else if ((iVar3 == 0x4e) || (iVar3 == 0x2c)) {
      iVar3 = FUN_004032c8(0x310);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x64bb) * 0x15);
    }
    else if (iVar3 == 0x15) {
      iVar3 = FUN_004032c8(0xaac);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x359e) * 0x15);
    }
    else if (iVar3 == 0x41) {
      iVar3 = FUN_004032c8(0xad3);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x1733) * 0x15);
    }
    else if (iVar3 == 0xc0) {
      iVar3 = FUN_004032c8(0x81c);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x83e6) * 0x15);
    }
    else if (iVar3 == 0xa0) {
      iVar3 = FUN_004032c8(0x55a);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x8c03) * 0x15);
    }
    else {
      iVar3 = FUN_004032c8(0x45ba);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2206) * 0x15);
    }
  }
  else if (iVar2 == 1) {
    if (iVar3 == 0x1d) {
      iVar3 = FUN_004032c8(0x1732);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + iVar3 * 0x15);
    }
    else {
      iVar3 = FUN_004032c8(0xad3);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x1733) * 0x15);
    }
  }
  else if (iVar2 == 2) {
    if ((((iVar3 == 0x39) || (iVar3 == 10)) ||
        ((iVar3 == 0x81 || ((iVar3 == 0x74 || (iVar3 == 0xb2)))))) || (iVar3 == 0xbe)) {
      iVar3 = FUN_004032c8(0x9fa);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x79eb) * 0x15);
    }
    else {
      iVar3 = FUN_004032c8(0x95e);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x67cb) * 0x15);
    }
  }
  else if (iVar2 == 3) {
    if ((iVar3 == 0x30) || (iVar3 == 0x31)) {
      iVar3 = FUN_004032c8(0x230);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x738a) * 0x15);
    }
    else if (iVar3 == 0x6b) {
      iVar3 = FUN_004032c8(0x430);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x75ba) * 0x15);
    }
    else if (iVar3 == 0x2b) {
      iVar3 = FUN_004032c8(0x25f);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x712a) * 0x15);
    }
    else if (iVar3 == 0xe) {
      iVar3 = FUN_004032c8(0x7bc);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2206) * 0x15);
    }
    else if ((((((iVar3 == 9) || (iVar3 == 0x12)) ||
               ((iVar3 == 0x3b ||
                ((((iVar3 == 0x59 || (iVar3 == 99)) || (iVar3 == 0x62)) ||
                 ((iVar3 == 0x6c || (iVar3 == 0x6f)))))))) || (iVar3 == 0x73)) ||
             ((iVar3 == 0x75 || (iVar3 == 0x90)))) ||
            ((iVar3 == 0x92 || (((iVar3 == 0x67 || (iVar3 == 0x27)) || (iVar3 == 0xbe)))))) {
      iVar3 = FUN_004032c8(0x9fa);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x79eb) * 0x15);
    }
    else {
      iVar3 = FUN_004032c8(0x12bb);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x712a) * 0x15);
    }
  }
  else if (iVar2 == 4) {
    if (((iVar3 == 0x44) || (iVar3 == 0x26)) || (iVar3 == 0x6a)) {
      iVar3 = FUN_004032c8(0x7bc);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2206) * 0x15);
    }
    else {
      iVar3 = FUN_004032c8(0xad3);
      FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x1733) * 0x15);
    }
  }
  else if (iVar2 == 5) {
    iVar3 = FUN_004032c8(0x7bc);
    FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b37c + (iVar3 + 0x2206) * 0x15);
  }
  if (local_c == 0) {
    FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
    iVar3 = FUN_004032c8();
    FUN_00404b48(&local_c,*(int *)PTR_DAT_0066b5b8 + iVar3 * 0x130);
  }
  FUN_00404928(local_8,local_c);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0064e68d;
  puStack_1c = (undefined1 *)0x64e685;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

