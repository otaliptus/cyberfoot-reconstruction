// Address: 0056c38c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_transferejogador(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBX;
  int iVar7;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined1 **ppuVar11;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  
  bVar10 = 0;
  local_24 = &stack0xfffffffc;
  iVar6 = 4;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_0056c6c9;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  iVar6 = 1;
  do {
    pbVar1 = (byte *)(DAT_0067b4bc + param_4 * 0x708 + -0x24 + iVar6 * 0x24);
    bVar8 = *pbVar1 == 0xffffffff;
    FUN_00403180(pbVar1,&DAT_0056c6dc);
    iVar7 = iVar6;
    if (bVar8) break;
    iVar6 = iVar6 + 1;
    iVar7 = unaff_EDI;
  } while (iVar6 != 0x1a);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x63f + iVar7) = 0;
  FUN_004030e0(DAT_0067b4bc + param_4 * 0x708 + -0x24 + iVar7 * 0x24,
               DAT_0067b4bc + -0x24 + param_2 * 0x24,CONCAT31((int3)((uint)DAT_0067b4bc >> 8),0x23))
  ;
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x617 + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x617 + param_2);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x667 + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x667 + param_2);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x68f + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x68f + param_2);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x5ef + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x5ef + param_2);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x5c7 + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x5c7 + param_2);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x59f + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x59f + param_2);
  *(undefined1 *)(DAT_0067b4bc + param_4 * 0x708 + 0x6b7 + iVar7) =
       *(undefined1 *)(DAT_0067b4bc + 0x6b7 + param_2);
  TForm3_timesalvar(param_1,param_4);
  puVar2 = (undefined4 *)(DAT_0067b4bc + -0x24 + param_2 * 0x24);
  *puVar2 = DAT_0056c6dc;
  *(undefined2 *)(puVar2 + (uint)bVar10 * -2 + 1) = (&DAT_0056c6e0)[(uint)bVar10 * -4];
  piVar3 = *(int **)(DAT_0067b4b4 + 0x33c);
  uVar5 = (**(code **)(*piVar3 + 0x138))();
  (**(code **)(*piVar3 + 0x1e4))(piVar3,uVar5);
  TForm3_timesalvar(param_1,0);
  local_14 = 0;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    uVar9 = true;
    do {
      (**(code **)(**(int **)(param_1 + 0x33c) + 0x100))
                (*(int **)(param_1 + 0x33c),1,iVar7,&stack0xffffffe8);
      FUN_00405378(unaff_EBX,&DAT_0056c6e8);
      if ((bool)uVar9) {
        local_14 = local_14 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
      uVar9 = iVar6 == 0;
    } while (!(bool)uVar9);
  }
  FUN_00409dd8(local_14,&stack0xffffffe0);
  FUN_004051d4(&stack0xffffffe4,unaff_EDI);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),unaff_ESI);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x11c))();
  FUN_00409dd8(uVar5,&local_28);
  FUN_00404bac(&local_28,&DAT_0056c6f4);
  FUN_004051d4(&local_24,local_28);
  ppuVar11 = &local_24;
  FUN_00642c50(0x2ef,&local_2c);
  FUN_0040526c(ppuVar11,local_2c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_24);
  puVar4 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_0056c6d0;
  local_28 = (undefined1 *)0x56c6a3;
  FUN_00404ff0(&local_2c,local_2c,puVar4);
  local_28 = (undefined1 *)0x56c6ab;
  FUN_004048d4(&local_28);
  local_28 = (undefined1 *)0x56c6b3;
  FUN_00404ff0(&local_24);
  local_28 = (undefined1 *)0x56c6bb;
  FUN_004048d4(&stack0xffffffe0);
  local_28 = (undefined1 *)0x56c6c8;
  FUN_00405008(&stack0xffffffe4,2);
  return;
}

