// Address: 005b4ad4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b4ad4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005b4c56;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_006d2a74 = _DAT_006d2a74 + 1;
  if (_DAT_006d2a74 == 0) {
    FUN_00405744(&PTR_DAT_0066a0f4,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a0b4,PTR_DAT_004010dc,0x10);
    FUN_00405744(&PTR_DAT_0066a094,PTR_DAT_004010dc,8);
    FUN_00405744(&PTR_s_Vencedor_S1_0066a084,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_s_Vencedor_Q4_0066a074,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a064,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a054,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a044,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a034,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a024,PTR_DAT_004010dc,4);
    FUN_00405744(&PTR_DAT_0066a014,PTR_DAT_004010dc,4);
    FUN_004061c8(&DAT_006d2a70,PTR_DAT_005ae31c);
    FUN_004061c8(&DAT_006d2a6c,PTR_DAT_005ae2fc);
    FUN_004061c8(&DAT_006d2a68,PTR_DAT_005ae2dc);
    FUN_004061c8(&DAT_006d2764,PTR_DAT_005ae2bc);
    FUN_004061c8(&DAT_006d2660,PTR_DAT_005ae29c);
    FUN_004061c8(&DAT_006d25dc,PTR_DAT_005ae27c);
    FUN_004061c8(&DAT_006d25d8,PTR_DAT_005ae25c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

