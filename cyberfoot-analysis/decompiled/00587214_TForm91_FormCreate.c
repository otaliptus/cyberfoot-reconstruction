// Address: 00587214
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm91_FormCreate(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
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
  iVar3 = 10;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_18 = &LAB_0058752f;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = 0x587241;
  FUN_00642c50(0x3e1,&local_8);
  local_20 = 0x58724f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_8);
  local_20 = 0x58725c;
  FUN_00642c50(0x40f,&local_c);
  local_20 = 0x58726a;
  FUN_004e161c(*(undefined4 *)(param_1 + 0x374),local_c);
  local_20 = 0x587277;
  FUN_00642c50(0x413,&stack0xfffffff0);
  local_20 = 0x587285;
  FUN_004e161c(*(undefined4 *)(param_1 + 0x378),unaff_EBX);
  local_20 = 0x587292;
  FUN_00642c50(0x414,&local_14);
  local_20 = 0x5872a0;
  FUN_004e161c(*(undefined4 *)(param_1 + 0x37c),local_14);
  local_20 = 0x5872ad;
  FUN_00642c50(0x40e,&local_18);
  local_20 = 0x5872bb;
  FUN_004e161c(*(undefined4 *)(param_1 + 0x370),local_18);
  local_20 = 0x5872c8;
  FUN_00642c50(0x80,&local_1c);
  local_20 = 0x5872d9;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x30c) + 0x60),local_1c);
  local_20 = 0x5872e6;
  FUN_00642c50(0x81,&local_20);
  uVar1 = local_20;
  local_20 = 0x5872f7;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x60),uVar1);
  local_20 = 0x587304;
  FUN_00642c50(0x82,&local_24);
  local_20 = 0x587315;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x60),local_24);
  local_20 = 0x587322;
  FUN_00642c50(0x83,&local_28);
  local_20 = 0x587333;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x34c) + 0x60),local_28);
  local_20 = 0x587340;
  FUN_00642c50(0x40c,&local_2c);
  local_20 = 0x587351;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x31c) + 0x60),local_2c);
  local_20 = 0x58735e;
  FUN_00642c50(0x85,&local_30);
  local_20 = 0x58736f;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 800) + 0x60),local_30);
  local_20 = 0x58737c;
  FUN_00642c50(0x86,&local_34);
  local_20 = 0x58738d;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x60),local_34);
  local_20 = 0x58739a;
  FUN_00642c50(0x88,&local_38);
  local_20 = 0x5873ab;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x60),local_38);
  local_20 = 0x5873b8;
  FUN_00642c50(0x89,&local_3c);
  local_20 = 0x5873c9;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x60),local_3c);
  local_20 = 0x5873d6;
  FUN_00642c50(0x8a,&local_40);
  local_20 = 0x5873e7;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x60),local_40);
  local_20 = 0x5873f4;
  FUN_00642c50(0x40d,&local_44);
  local_20 = 0x587405;
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x348) + 0x60),local_44);
  local_20 = 0x58740c;
  FUN_005862fc(param_1);
  if (*(int *)PTR_DAT_0066b76c == *(int *)(PTR_DAT_0066ac78 + 8)) {
    DAT_006d21dc = '\x01';
    local_20 = 0x587432;
    FUN_00466128(*(undefined4 *)(param_1 + 0x374),1);
  }
  else {
    DAT_006d21dc = '\0';
    local_20 = 0x587448;
    FUN_00466128(*(undefined4 *)(param_1 + 0x374),0);
  }
  local_20 = 0x587457;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066b76c,&local_48);
  if (local_48 == 0) {
    local_20 = 0x58748f;
    FUN_0043aa68(*(undefined4 *)(param_1 + 0x364),0);
  }
  else {
    local_20 = 0x58746c;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066b76c,&local_4c);
    local_20 = 0x587480;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x168),local_4c);
  }
  if (DAT_006d21dc == '\0') {
    local_20 = 0x5874c2;
    FUN_00642c50(0x13e,&local_54);
    local_20 = 0x5874d0;
    FUN_004e161c(*(undefined4 *)(param_1 + 0x370),local_54);
  }
  else {
    local_20 = 0x5874a5;
    FUN_00642c50(0x40e,&local_50);
    local_20 = 0x5874b3;
    FUN_004e161c(*(undefined4 *)(param_1 + 0x370),local_50);
  }
  if (*PTR_DAT_0066b458 != '\0') {
    local_20 = 0x5874ea;
    FUN_0050a850(*(undefined4 *)(param_1 + 0x30c),0x41);
    local_20 = 0x5874fa;
    FUN_0050a850(*(undefined4 *)(param_1 + 0x328),0x5a);
  }
  puVar2 = local_14;
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_00587536;
  local_18 = (undefined1 *)0x587514;
  FUN_00405008(&local_54,2,puVar2);
  local_18 = (undefined1 *)0x587521;
  FUN_004048f8(&local_4c,2);
  local_18 = (undefined1 *)0x58752e;
  FUN_00405008(&local_44,0x10);
  return;
}

