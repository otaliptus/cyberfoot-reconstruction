// Address: 004dcba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x004dcc33) */
/* WARNING: Removing unreachable block (ram,0x004dcc3d) */

void FUN_004dcba4(int param_1,int param_2,undefined4 param_3,uint param_4,byte param_5,
                 LPRECT param_6)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint *in_FS_OFFSET;
  bool bVar9;
  uint uVar10;
  uint in_stack_ffffffcc;
  LPRECT ptVar11;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  short *local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_c = (short *)0x0;
  puStack_28 = &LAB_004dcd8f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if ((*PTR_DAT_0066adfc == '\0') ||
     (cVar2 = FUN_00479be4(param_1), puVar1 = puStack_24, cVar2 != '\0')) {
    puStack_24 = puVar1;
    in_stack_ffffffcc = (uint)param_5;
    uVar10 = param_4;
    FUN_00404b6c(&local_14,local_8);
    param_4 = 0x4dcc02;
    FUN_00477170(param_1,param_2,local_14,uVar10,in_stack_ffffffcc,param_6);
    goto LAB_004dcd71;
  }
  local_10 = thunk_FUN_0047910c(param_1);
  if ((local_10 != 0) && (cVar2 = FUN_0047a744(local_10), cVar2 != '\0')) {
    param_4 = param_4 | 0x20002;
  }
  thunk_FUN_0040502c(&local_c,local_8);
  if ((param_4 & 0x400) != 0) {
    bVar9 = true;
    FUN_00405378(local_c);
    if ((bVar9) || ((*local_c == 0x26 && (local_c[1] == 0)))) {
      FUN_0040526c(&local_c,&DAT_004dcda4);
    }
  }
  FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),1);
  if (*(char *)(param_1 + 0x3a) != '\0') {
    bVar3 = FUN_0042a660(*(undefined4 *)(param_2 + 0xc));
    FUN_0042a66c(*(undefined4 *)(param_2 + 0xc),bVar3 | DAT_004dcda8);
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (param_5 == 0) {
      OffsetRect(param_6,1,1);
      FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000014);
      in_stack_ffffffcc = param_4;
      ptVar11 = param_6;
      uVar4 = FUN_00405260(local_c);
      uVar5 = FUN_0042b5a8(param_2);
      uVar6 = FUN_00405250(local_c);
      FUN_004d4104(uVar5,uVar6,uVar4,in_stack_ffffffcc,ptVar11);
      OffsetRect(param_6,-1,-1);
    }
    else {
      iVar7 = FUN_00429e64(0xff00000d);
      iVar8 = FUN_00429e64(0xff000010);
      if (iVar7 == iVar8) {
        FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000014);
        goto LAB_004dcd4a;
      }
    }
    FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000010);
  }
LAB_004dcd4a:
  uVar4 = FUN_00405260(local_c);
  uVar5 = FUN_0042b5a8(param_2);
  uVar6 = FUN_00405250(local_c);
  FUN_004d4104(uVar5,uVar6,uVar4,param_4,param_6);
LAB_004dcd71:
  *in_FS_OFFSET = param_4;
  FUN_004048d4(&local_14,param_4,in_stack_ffffffcc,&LAB_004dcd96);
  FUN_00404ff0(&local_c);
  return;
}

