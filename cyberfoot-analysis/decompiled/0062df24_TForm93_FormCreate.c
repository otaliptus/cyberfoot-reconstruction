// Address: 0062df24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm93_FormCreate(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = &stack0xfffffffc;
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = &LAB_0062e154;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = 0x62df51;
  FUN_00642c50(0x418,&local_8);
  local_20 = 0x62df5f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_8);
  local_20 = 0x62df6c;
  FUN_00642c50(0x419,&local_c);
  local_20 = 0x62df7a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_c);
  local_20 = 0x62df87;
  FUN_00642c50(0x41a,&stack0xfffffff0);
  local_20 = 0x62df95;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),unaff_EBX);
  local_20 = 0x62dfa2;
  FUN_00642c50(0xde,&local_14);
  local_20 = 0x62dfb0;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_14);
  local_20 = 0x62dfbd;
  FUN_00642c50(0xdc,&local_18);
  local_20 = 0x62dfcb;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_18);
  local_20 = 0x62dfd8;
  FUN_00642c50(0x41b,&local_1c);
  local_20 = 0x62dfe6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_1c);
  local_20 = 0x62dff3;
  FUN_00642c50(0xdc,&local_20);
  uVar1 = local_20;
  local_20 = 0x62e001;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),uVar1);
  local_20 = 0x62e00e;
  FUN_00642c50(0xde,&local_24);
  local_20 = 0x62e01c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_24);
  local_20 = 0x62e029;
  FUN_00642c50(0x3e2,&local_28);
  local_20 = 0x62e037;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_28);
  local_20 = 0x62e044;
  FUN_00642c50(0x3e3,&local_2c);
  local_20 = 0x62e052;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_2c);
  local_20 = 0x62e06c;
  (**(code **)(**(int **)(param_1 + 0x314) + 0xcc))
            (*(int **)(param_1 + 0x314),PTR_DAT_0066ac78[0x175]);
  local_20 = 0x62e086;
  (**(code **)(**(int **)(param_1 + 0x318) + 0xcc))
            (*(int **)(param_1 + 0x318),PTR_DAT_0066ac78[0x176]);
  local_20 = 0x62e0a0;
  (**(code **)(**(int **)(param_1 + 0x31c) + 0xcc))
            (*(int **)(param_1 + 0x31c),PTR_DAT_0066ac78[0x177]);
  local_20 = 0x62e0ba;
  (**(code **)(**(int **)(param_1 + 800) + 0xcc))(*(int **)(param_1 + 800),PTR_DAT_0066ac78[0x178]);
  local_20 = 0x62e0d0;
  (**(code **)(**(int **)(param_1 + 0x308) + 0xcc))(*(int **)(param_1 + 0x308),*PTR_DAT_0066b244);
  local_20 = 0x62e0e6;
  (**(code **)(**(int **)(param_1 + 0x338) + 0xcc))(*(int **)(param_1 + 0x338),*PTR_DAT_0066b598);
  local_20 = 0x62e100;
  (**(code **)(**(int **)(param_1 + 0x300) + 0xcc))
            (*(int **)(param_1 + 0x300),PTR_DAT_0066ac78[0x75d]);
  local_20 = 0x62e105;
  cVar3 = FUN_00651f8c();
  if (cVar3 == '\0') {
    local_20 = 0x62e119;
    (**(code **)(**(int **)(param_1 + 0x300) + 0xcc))(*(int **)(param_1 + 0x300),0);
    local_20 = 0x62e126;
    (**(code **)(**(int **)(param_1 + 0x300) + 100))(*(int **)(param_1 + 0x300),0);
    local_20 = 0x62e139;
    FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x68),0x808080);
  }
  puVar2 = local_14;
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_0062e15b;
  local_18 = (undefined1 *)0x62e153;
  FUN_00405008(&local_2c,10,puVar2);
  return;
}

