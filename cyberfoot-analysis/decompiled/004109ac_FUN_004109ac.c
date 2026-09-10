// Address: 004109ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004109ac(void)

{
  HMODULE pHVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  puVar12 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  puVar14 = &stack0xfffffffc;
  puVar15 = &stack0xfffffffc;
  puVar16 = &stack0xfffffffc;
  puVar17 = &stack0xfffffffc;
  puVar18 = &stack0xfffffffc;
  puVar19 = &stack0xfffffffc;
  puVar20 = &stack0xfffffffc;
  puVar21 = &stack0xfffffffc;
  puVar22 = &stack0xfffffffc;
  pHVar1 = GetModuleHandleA("oleaut32.dll");
  DAT_0066c7a4 = FUN_00410980("VariantChangeTypeEx",&LAB_004104fc);
  _DAT_0066c7a8 = FUN_00410980("VarNeg",&LAB_0041052c,puVar2,&stack0xfffffffc,pHVar1);
  _DAT_0066c7ac = FUN_00410980("VarNot",&LAB_0041052c,puVar3);
  _DAT_0066c7b0 = FUN_00410980("VarAdd",FUN_00410538,puVar4);
  _DAT_0066c7b4 = FUN_00410980("VarSub",FUN_00410538,puVar5);
  _DAT_0066c7b8 = FUN_00410980("VarMul",FUN_00410538,puVar6);
  _DAT_0066c7bc = FUN_00410980("VarDiv",FUN_00410538,puVar7);
  _DAT_0066c7c0 = FUN_00410980("VarIdiv",FUN_00410538,puVar8);
  _DAT_0066c7c4 = FUN_00410980("VarMod",FUN_00410538,puVar9);
  _DAT_0066c7c8 = FUN_00410980("VarAnd",FUN_00410538,puVar10);
  _DAT_0066c7cc = FUN_00410980("VarOr",FUN_00410538,puVar11);
  _DAT_0066c7d0 = FUN_00410980("VarXor",FUN_00410538,puVar12);
  _DAT_0066c7d4 = FUN_00410980("VarCmp",FUN_00410544,puVar13);
  DAT_0066c7d8 = FUN_00410980("VarI4FromStr",FUN_00410550,puVar14);
  _DAT_0066c7dc = FUN_00410980("VarR4FromStr",&LAB_004105bc,puVar15);
  DAT_0066c7e0 = FUN_00410980("VarR8FromStr",&LAB_00410628,puVar16);
  DAT_0066c7e4 = FUN_00410980("VarDateFromStr",&LAB_00410694,puVar17);
  DAT_0066c7e8 = FUN_00410980("VarCyFromStr",&LAB_00410700,puVar18);
  DAT_0066c7ec = FUN_00410980("VarBoolFromStr",&LAB_0041076c,puVar19);
  DAT_0066c7f0 = FUN_00410980("VarBstrFromCy",&LAB_004107ec,puVar20);
  DAT_0066c7f4 = FUN_00410980("VarBstrFromDate",&LAB_0041085c,puVar21);
  DAT_0066c7f8 = FUN_00410980("VarBstrFromBool",&LAB_004108cc,puVar22,&stack0xfffffffc);
  return;
}

