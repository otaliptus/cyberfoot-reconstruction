// Address: 0057d948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm10_btconstruirClick(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar5;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0057dc01;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  if ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
      < (float)DAT_006d21b0 * _DAT_0057dc10) {
    FUN_00642c50(0x2df,&local_20);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_20);
  }
  else {
    local_20 = &stack0xfffffffc;
    iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b108);
    iVar1 = iVar1 + 1;
    FUN_004060a8(PTR_DAT_0066b108,PTR_DAT_00488e40,1,iVar1);
    *(undefined4 *)(*(int *)PTR_DAT_0066b108 + -0x28 + iVar1 * 0x28) =
         *(undefined4 *)(PTR_DAT_0066ac78 + 8);
    iVar4 = *(int *)PTR_DAT_0066b108;
    *(undefined4 *)(iVar4 + -0x20 + iVar1 * 0x28) = DAT_006d21b4;
    *(undefined4 *)(iVar4 + -0x1c + iVar1 * 0x28) = DAT_006d21b8;
    *(undefined1 *)(*(int *)PTR_DAT_0066b108 + -8 + iVar1 * 0x28) = 1;
    iVar4 = 1;
    piVar2 = &DAT_006d21a0;
    do {
      if (0 < *piVar2) {
        *(int *)(*(int *)PTR_DAT_0066b108 + iVar1 * 0x28 + -0x1c + iVar4 * 4) = *piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar4 != 5);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)
                       (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) -
               (float)DAT_006d21b0 * _DAT_0057dc10);
    piVar2 = (int *)(*(int *)PTR_DAT_0066afec + 0x14 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x38);
    *piVar2 = *piVar2 + DAT_006d21b0;
    uVar3 = FUN_00402c38();
    FUN_006468f4(uVar3,&local_c);
    FUN_00404b6c(&local_8,local_c);
    FUN_00466238(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_8);
    FUN_00642c50(0x2d7,&stack0xffffffec);
    FUN_0040d11c(&stack0xffffffe4);
    FUN_004051d4(&stack0xffffffe8,unaff_EDI);
    FUN_00405330(&local_10,3);
    FUN_004e1414(*(undefined4 *)(*(int *)PTR_DAT_0066aeec + 0x33c),local_10);
    FUN_00466128(*(undefined4 *)(*(int *)PTR_DAT_0066aeec + 0x33c),1);
    FUN_00466128(*(undefined4 *)(*(int *)PTR_DAT_0066aeec + 0x370),0);
    FUN_00483bc4(DAT_006d218c);
  }
  pwVar5 = L"<shad>";
  uVar3 = FUN_00402c38();
  FUN_006468f4(uVar3,&local_28);
  FUN_00405330(&local_24,3);
  FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_24);
  *in_FS_OFFSET = L"</shad>";
  FUN_00405008(&local_28,3,pwVar5,&LAB_0057dc08);
  FUN_004048d4(&stack0xffffffe4);
  FUN_00405008(&stack0xffffffe8,4);
  FUN_004048d4(&local_8);
  return;
}

