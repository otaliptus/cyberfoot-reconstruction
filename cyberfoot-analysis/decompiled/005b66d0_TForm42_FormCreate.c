// Address: 005b66d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm42_FormCreate(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  int local_2c;
  wchar_t *pwVar4;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 8;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_005b699c;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  FUN_00642c50(0x30c,&local_8);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x354),local_8);
  *(undefined1 *)(DAT_006d2b00 + 0x22d) = 1;
  local_2c = 0x5b6720;
  iVar3 = GetSystemMetrics(0);
  if (iVar3 != *(int *)PTR_DAT_0066ad9c) {
    cVar2 = FUN_00653074();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,iVar3,*(undefined4 *)PTR_DAT_0066ad9c);
      FUN_00481860(DAT_006d2b00,1);
      goto LAB_005b67a1;
    }
  }
  cVar2 = FUN_00652fb8();
  if (cVar2 == '\0') {
    cVar2 = FUN_0065305c();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,0x96,100);
      FUN_00481860(DAT_006d2b00,1);
    }
  }
  else {
    FUN_0046c5b8(param_1,0x85,100);
    FUN_00481860(DAT_006d2b00,1);
  }
LAB_005b67a1:
  DAT_006d2b04 = 0;
  pwVar4 = L"<p align=\"center\"><shad>";
  local_2c = 0x5b67ba;
  FUN_00642c50(4,&local_10);
  local_2c = local_10;
  local_30 = L"</shad></p>";
  local_34 = 0x5b67cf;
  FUN_00405330(&local_c,3);
  local_34 = 0x5b67dd;
  FUN_00545088(*(undefined4 *)(param_1 + 0x348),local_c);
  local_34 = 0x5b67ea;
  FUN_00642c50(0x30a,&stack0xffffffec);
  local_34 = 0x5b67f7;
  FUN_0040526c(&stack0xffffffec,&DAT_005b6a04);
  local_34 = 0x5b6805;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),unaff_EBX);
  local_34 = 0x5b6812;
  FUN_00642c50(0x30b,&stack0xffffffe8);
  local_34 = 0x5b681f;
  FUN_0040526c(&stack0xffffffe8,&DAT_005b6a04);
  local_34 = 0x5b682d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),unaff_ESI);
  local_34 = 0x5b683a;
  FUN_00642c50(0x2ff,&local_1c);
  local_34 = 0x5b6848;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x350),local_1c);
  local_34 = 0x5b6855;
  FUN_00642c50(0x300,&local_20);
  local_34 = 0x5b6863;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_20);
  local_34 = 0x5b6870;
  FUN_00642c50(0x301,&local_24);
  local_34 = 0x5b687e;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_24);
  local_34 = 0x5b688b;
  FUN_00642c50(0x302,&stack0xffffffd8);
  local_34 = 0x5b6899;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),pwVar4);
  local_34 = 0x5b68a6;
  FUN_00642c50(0x303,&local_2c);
  local_34 = 0x5b68b4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x334),local_2c);
  local_34 = 0x5b68c1;
  FUN_00642c50(0x304,&local_30);
  local_34 = 0x5b68cf;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_30);
  local_34 = 0x5b68dc;
  FUN_00642c50(0x305,&local_34);
  uVar1 = local_34;
  local_34 = 0x5b68ea;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),uVar1);
  local_34 = 0x5b68f7;
  FUN_00642c50(0x30d,&local_38);
  local_34 = 0x5b6905;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x340),local_38);
  local_34 = 0x5b6912;
  FUN_00642c50(0x306,&local_3c);
  local_34 = 0x5b6920;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x344),local_3c);
  local_34 = 0x5b692d;
  FUN_00642c50(0x307,&local_40);
  local_34 = 0x5b693b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_40);
  local_34 = 0x5b6948;
  FUN_00642c50(0x308,&local_44);
  local_34 = 0x5b6956;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_44);
  local_34 = 0x5b6963;
  FUN_00642c50(0x309,&local_48);
  local_34 = 0x5b6971;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_48);
  local_34 = 0x5b6981;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),L"www.cyberfoot.net");
  *in_FS_OFFSET = local_30;
  local_2c = 0x5b699b;
  FUN_00405008(&local_48,0x11,pwVar4);
  return;
}

