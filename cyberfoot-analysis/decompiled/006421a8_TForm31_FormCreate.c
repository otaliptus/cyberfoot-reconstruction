// Address: 006421a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm31_FormCreate(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [56];
  undefined1 local_74 [40];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined *local_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x17;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puStack_24 = &LAB_006424e5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x6421d8;
  FUN_00642c50(0x1a7,&local_c);
  puStack_2c = (undefined1 *)0x6421e6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_c);
  puStack_2c = (undefined1 *)0x6421f3;
  FUN_00642c50(0x1a6,&local_10);
  puStack_2c = (undefined1 *)0x642201;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_10);
  puStack_2c = (undefined1 *)0x642210;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066b48c,&stack0xffffffec);
  if (unaff_EBX != 0) {
    puStack_2c = (undefined1 *)0x642225;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066b48c,&stack0xffffffe8);
    puStack_2c = (undefined1 *)0x642239;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x168),unaff_ESI);
  }
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)PTR_DAT_0066b48c * 0x2f8);
  puStack_2c = (undefined1 *)0x642252;
  FUN_0064a260();
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + *(int *)PTR_DAT_0066b48c * 0x2f8) < 0xf) {
    puStack_2c = (undefined1 *)0x642275;
    FUN_00642c50(0x1a0,&local_8);
  }
  else if (_DAT_006424f4 <=
           (float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)PTR_DAT_0066b48c * 0x2f8))
  {
    puStack_2c = (undefined1 *)0x6422ae;
    FUN_00642c50(0x1a2,&local_8);
  }
  else {
    puStack_2c = (undefined1 *)0x64229f;
    FUN_00642c50(0x1a1,&local_8);
  }
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)PTR_DAT_0066b48c * 0x2f8) == 0) {
    puStack_2c = (undefined1 *)0x6422d2;
    FUN_00642c50(0x1a3,&local_8);
  }
  if (*PTR_DAT_0066af2c != '\0') {
    puStack_2c = (undefined1 *)0x6422e9;
    FUN_00642c50(0x1a4,&local_8);
  }
  iVar3 = *(int *)PTR_DAT_0066b48c;
  puStack_2c = (undefined1 *)0x642312;
  FUN_004030d4(&local_3c,
               *(int *)PTR_DAT_0066b718 +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar3 * 0x2f8) * 0x80);
  puStack_2c = (undefined1 *)0x642321;
  FUN_004030a4(&local_3c,&DAT_006424f8,0x1b);
  puStack_2c = (undefined1 *)0x64232c;
  FUN_004030d4(local_74,&local_3c);
  puStack_2c = (undefined1 *)0x642345;
  FUN_004030a4(local_74,*(int *)PTR_DAT_0066af70 + iVar3 * 0x2f8,0x34);
  puStack_2c = (undefined1 *)0x642353;
  FUN_004030d4(local_ac,local_74);
  puStack_2c = (undefined1 *)0x642365;
  FUN_004030a4(local_ac,&DAT_006424fc,0x35);
  puStack_2c = (undefined1 *)0x642373;
  FUN_00405194(&local_20,local_ac);
  puStack_2c = local_20;
  uStack_30 = 0x642386;
  FUN_00642c50(0x19f,&local_b0);
  uStack_30 = local_b0;
  puStack_34 = &DAT_00642504;
  uStack_38 = local_8;
  local_3c = &DAT_0064250c;
  uStack_40 = 0x6423a6;
  FUN_00405330(&stack0xffffffe4,5);
  uStack_40 = 0x6423b4;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),unaff_EDI);
  uStack_40 = 0x6423cf;
  FUN_00405194(&local_b4,*(int *)PTR_DAT_0066b718 + iVar1 * 0x80);
  uStack_40 = 0x6423e0;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_b4);
  uStack_40 = 0x6423e5;
  iVar3 = FUN_0065612c();
  if (iVar3 == -1) {
    uStack_40 = 0x6423f6;
    FUN_00483bc4(DAT_006d5308);
  }
  else {
    uStack_40 = 0x64240b;
    FUN_00642c50(0x1a5,&local_bc);
    uStack_40 = local_bc;
    puStack_44 = &DAT_00642504;
    uStack_48 = 0x642431;
    FUN_00405194(&local_c0,*(int *)PTR_DAT_0066b718 + iVar3 * 0x80);
    uStack_48 = local_c0;
    uStack_4c = 0x642447;
    FUN_00405330(&local_b8,3);
    uStack_40 = 0x642458;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_b8);
    uStack_40 = 0x642466;
    FUN_00649824(*(undefined4 *)PTR_DAT_0066b48c,iVar1);
    if (-1 < *(int *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar3 * 0x80)) {
      uStack_40 = 0x642492;
      FUN_00649824(*(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + iVar3 * 0x80),iVar3);
    }
    uStack_40 = 0x6424a0;
    FUN_00649138(*(undefined4 *)PTR_DAT_0066b48c,iVar3);
  }
  puVar2 = puStack_34;
  *in_FS_OFFSET = local_3c;
  puStack_34 = &LAB_006424ec;
  uStack_38 = 0x6424bd;
  FUN_00405008(&local_c0,5,puVar2);
  uStack_38 = 0x6424ca;
  FUN_00405008(&local_20,2);
  uStack_38 = 0x6424d7;
  FUN_004048f8(&stack0xffffffe8,2);
  uStack_38 = 0x6424e4;
  FUN_00405008(&local_10,3);
  return;
}

