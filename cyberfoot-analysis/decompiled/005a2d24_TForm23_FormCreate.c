// Address: 005a2d24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm23_FormCreate(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uVar4;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = &stack0xfffffffc;
  iVar3 = 7;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c = &LAB_005a2fce;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  FUN_00642c50(0x170,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x3a8),local_8);
  FUN_00642c50(0x31,&local_c);
  FUN_0040526c(&local_c,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_c);
  FUN_00642c50(0x32,&stack0xfffffff0);
  FUN_0040526c(&stack0xfffffff0,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),unaff_EBX);
  FUN_00642c50(0x36,&stack0xffffffec);
  FUN_0040526c(&stack0xffffffec,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),unaff_ESI);
  FUN_00642c50(0x33,&local_18);
  FUN_0040526c(&local_18,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_18);
  FUN_00642c50(0x35,&local_1c);
  FUN_0040526c(&local_1c,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_1c);
  FUN_00642c50(0x171,&local_20);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x348),local_20);
  FUN_00642c50(0x84,&stack0xffffffdc);
  uVar4 = 0x5a2e5d;
  FUN_0040526c(&stack0xffffffdc,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),uVar4);
  FUN_00642c50(0x133,&local_28);
  FUN_0040526c(&local_28,&DAT_005a2fe0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_28);
  FUN_00642c50(0x177,&local_2c);
  FUN_004e161c(*(undefined4 *)(param_1 + 0x3ac),local_2c);
  FUN_00642c50(0x173,&local_30);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x380),local_30);
  FUN_00642c50(0x176,&local_34);
  FUN_004e1414(*(undefined4 *)(param_1 + 900),local_34);
  FUN_00642c50(0x178,&local_38);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x388),local_38);
  FUN_00642c50(0x179,&local_3c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x390),local_3c);
  DAT_006d24f0 = 0xffffffff;
  local_28 = 0x5a2f2b;
  iVar3 = GetSystemMetrics(0);
  if (iVar3 != *(int *)PTR_DAT_0066ad9c) {
    cVar2 = FUN_00653074();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,iVar3,*(undefined4 *)PTR_DAT_0066ad9c);
      FUN_00481860(DAT_006d24b0,1);
      goto LAB_005a2fac;
    }
  }
  cVar2 = FUN_00652fb8();
  if (cVar2 == '\0') {
    cVar2 = FUN_0065305c();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,0x96,100);
      FUN_00481860(DAT_006d24b0,1);
    }
  }
  else {
    FUN_0046c5b8(param_1,0x85,100);
    FUN_00481860(DAT_006d24b0,1);
  }
LAB_005a2fac:
  FUN_005a3014(param_1);
  puVar1 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_005a2fd5;
  local_1c = (undefined1 *)0x5a2fcd;
  FUN_00405008(&local_3c,0xe,puVar1);
  return;
}

