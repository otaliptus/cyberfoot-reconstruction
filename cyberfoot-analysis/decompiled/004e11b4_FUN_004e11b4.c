// Address: 004e11b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e11b4(int *param_1,LPRECT param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  LPRECT ptVar10;
  short *local_10;
  undefined1 local_9;
  LPRECT local_8;
  
  local_10 = (short *)0x0;
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  local_9 = 0;
  local_8 = param_2;
  if (*PTR_DAT_0066adfc != '\0') {
    local_9 = 1;
    thunk_FUN_0040502c(&local_10,param_4);
    iVar2 = param_1[0x5c];
    iVar1 = param_1[0x58];
    if ((param_3 & 0x400) != 0) {
      bVar9 = true;
      FUN_00405378(local_10);
      if ((bVar9) || ((((char)iVar2 != '\0' && (*local_10 == 0x26)) && (local_10[1] == 0)))) {
        FUN_0040526c(&local_10,&DAT_004e133c);
      }
    }
    if ((char)iVar2 == '\0') {
      param_3 = param_3 | 0x800;
    }
    uVar4 = FUN_004684f8(param_1,param_3);
    FUN_0042b4a4(iVar1,param_1[0x1a]);
    cVar3 = (**(code **)(*param_1 + 0x50))();
    if (cVar3 == '\0') {
      OffsetRect(local_8,1,1);
      FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000014);
      uVar8 = uVar4;
      uVar5 = FUN_00405260(local_10);
      uVar6 = FUN_0042b5a8(iVar1);
      uVar7 = FUN_00405250(local_10);
      FUN_004d4104(uVar6,uVar7,uVar5);
      OffsetRect(local_8,-1,-1);
      FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000010);
      ptVar10 = local_8;
      uVar5 = FUN_00405260(local_10);
      uVar6 = FUN_0042b5a8(iVar1);
      FUN_004d4104(uVar6,uVar7,uVar5,uVar4,ptVar10);
      uVar4 = uVar8;
    }
    else {
      uVar8 = FUN_00405260(local_10);
      uVar5 = FUN_0042b5a8(iVar1);
      uVar6 = FUN_00405250(local_10);
      FUN_004d4104(uVar5,uVar6,uVar8);
    }
  }
  *in_FS_OFFSET = uVar4;
  FUN_00404ff0(&local_10,uVar4,&stack0xfffffffc);
  return;
}

