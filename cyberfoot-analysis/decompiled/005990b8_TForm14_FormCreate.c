// Address: 005990b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_FormCreate(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uVar4;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 10;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_005994dd;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  FUN_00642c50(0x12e,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_8);
  FUN_00642c50(0x2f,&local_c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3ac),local_c);
  FUN_00642c50(0x30,&local_10);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3a8),local_10);
  FUN_00642c50(0x133,&stack0xffffffec);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),unaff_EBX);
  FUN_00642c50(0x13f,&stack0xffffffe8);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3e0),unaff_ESI);
  FUN_00642c50(0x80,&local_1c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x60),local_1c);
  FUN_00642c50(0x81,&local_20);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x60),local_20);
  FUN_00642c50(0x82,&local_24);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x60),local_24);
  uVar4 = 0x5991c8;
  FUN_00642c50(0x83,&stack0xffffffd8);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x60),uVar4);
  FUN_00642c50(0x84,&local_2c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x60),local_2c);
  FUN_00642c50(0x85,&local_30);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x60),local_30);
  FUN_00642c50(0x86,&local_34);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x334) + 0x60),local_34);
  FUN_00642c50(0x87,&local_38);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x60),local_38);
  FUN_00642c50(0x88,&local_3c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x60),local_3c);
  FUN_00642c50(0x89,&local_40);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x60),local_40);
  FUN_00642c50(0x139,&local_44);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x348) + 0x60),local_44);
  FUN_00642c50(0x13a,&local_48);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x368) + 0x60),local_48);
  FUN_00642c50(0x13b,&local_4c);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3c8),local_4c);
  FUN_00642c50(0x13d,&local_50);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3cc),local_50);
  FUN_00642c50(0x13e,&local_54);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3d0),local_54);
  DAT_006d23e4 = 1;
  FUN_0046599c(*(undefined4 *)(param_1 + 0x3b0),*(int *)(*(int *)(param_1 + 0x398) + 0x44) + 5);
  if (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x3b4),0);
  }
  if (*(int *)PTR_DAT_0066b610 <=
      *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x390),1);
    FUN_00642c50(0x134,&local_58);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x390),local_58);
  }
  FUN_00584114(*(undefined4 *)(param_1 + 0x3a4),0);
  FUN_00584114(*(undefined4 *)(param_1 + 0x3a0),0);
  *(undefined1 *)(DAT_006d2290 + 0x22d) = 1;
  local_2c = 0x5993ca;
  iVar3 = GetSystemMetrics(0);
  if (iVar3 != *(int *)PTR_DAT_0066ad9c) {
    cVar2 = FUN_00653074();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,iVar3,*(undefined4 *)PTR_DAT_0066ad9c);
      FUN_00481860(DAT_006d2290,1);
      goto LAB_0059944b;
    }
  }
  cVar2 = FUN_00652fb8();
  if (cVar2 == '\0') {
    cVar2 = FUN_0065305c();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,0x96,100);
      FUN_00481860(DAT_006d2290,1);
    }
  }
  else {
    FUN_0046c5b8(param_1,0x85,100);
    FUN_00481860(DAT_006d2290,1);
  }
LAB_0059944b:
  if (800 < iVar3) {
    FUN_004659e8(*(undefined4 *)(param_1 + 0x3a4),0x18);
    FUN_004659e8(*(undefined4 *)(param_1 + 0x3a0),0x18);
  }
  FUN_0059affc(param_1);
  FUN_00597468(param_1);
  FUN_0046599c(*(undefined4 *)(param_1 + 0x394),*(int *)(*(int *)(param_1 + 0x318) + 0x44) + -0x28);
  if (*PTR_DAT_0066b458 != '\0') {
    FUN_0050a850(*(undefined4 *)(param_1 + 0x31c),0x41);
    FUN_0050a850(*(undefined4 *)(param_1 + 0x344),0x5a);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005994e4;
  local_20 = (undefined1 *)0x5994dc;
  FUN_00405008(&local_58,0x15,puVar1);
  return;
}

