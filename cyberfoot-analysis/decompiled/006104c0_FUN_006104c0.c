// Address: 006104c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006104c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined1 local_28 [28];
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_c = 0;
  puStack_40 = &LAB_00610769;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (*PTR_DAT_0066b6c8 == '\0') {
    FUN_004030d4(local_28,&DAT_0061077c);
    FUN_004030a4(local_28,*(int *)PTR_DAT_0066af70 + param_6 * 0x2f8,0x1a);
    FUN_00404b48(&local_c,local_28);
    FUN_00466238(*(undefined4 *)(DAT_006d4764 + param_2 * 4),local_c);
    FUN_004030d4(local_28,&DAT_0061077c);
    FUN_004030a4(local_28,*(int *)PTR_DAT_0066af70 + param_5 * 0x2f8,0x1a);
    FUN_00404b48(&local_2c,local_28);
    FUN_00466238(*(undefined4 *)(DAT_006d4768 + param_2 * 4),local_2c);
    FUN_004663a8(*(undefined4 *)(DAT_006d4764 + param_2 * 4),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_6 * 0x2f8));
    FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d461c + param_2 * 4) + 0x16c),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_6 * 0x2f8));
    FUN_004663a8(*(undefined4 *)(DAT_006d4768 + param_2 * 4),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_5 * 0x2f8));
    FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d46bc + param_2 * 4) + 0x16c),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + param_5 * 0x2f8));
    FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + param_2 * 4) + 0x68),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + param_6 * 0x2f8));
    FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + param_2 * 4) + 0x68),
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + param_5 * 0x2f8));
    FUN_00466238(*(undefined4 *)(DAT_006d4774 + param_2 * 4),&DAT_00610788);
    FUN_00466238(*(undefined4 *)(DAT_006d4778 + param_2 * 4),&DAT_00610788);
    puVar1 = puStack_3c;
  }
  puStack_3c = puVar1;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 4 + param_2 * 0x1bc) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_6 * 0x2f8);
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + param_2 * 0x1bc) = param_6;
  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + param_2 * 0x1bc) = param_5;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + param_2 * 0x1bc) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + param_6 * 0x2f8);
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + param_2 * 0x1bc) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + param_5 * 0x2f8);
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + param_2 * 0x1bc) = 3;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + param_2 * 0x1bc) = 3;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x17c + param_2 * 0x1bc) = param_4;
  uVar2 = FUN_0064dee4(local_8,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_6 * 0x2f8),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_6 * 0x2f8),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x80 + param_6 * 0x2f8),
                       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x40 + param_6 * 0x2f8));
  puVar1 = puStack_3c;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc) = uVar2;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00610770;
  puStack_40 = (undefined1 *)0x610760;
  FUN_004048d4(&local_2c,uStack_44,puVar1);
  puStack_40 = (undefined1 *)0x610768;
  FUN_004048d4(&local_c);
  return;
}

