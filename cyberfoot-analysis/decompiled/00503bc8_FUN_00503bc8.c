// Address: 00503bc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00503bc8(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  HCURSOR pHVar4;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    local_5 = extraout_DL;
  }
  FUN_0050d8e4(param_1,0);
  *(undefined1 *)(param_1 + 0x508) = 0;
  *(undefined1 *)(param_1 + 0x509) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  *(undefined4 *)(param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0x518) = 0;
  piVar2 = (int *)FUN_005022a8(PTR_PTR_00501e98,1,param_1);
  *(int **)(param_1 + 0x510) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x510),0);
  *(undefined4 *)(param_1 + 0x52c) = 0xffffffff;
  piVar2 = (int *)FUN_005022a8(PTR_PTR_00501e98,1,param_1);
  *(int **)(param_1 + 0x588) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x588),0);
  piVar2 = (int *)FUN_00501fec(PTR_PTR_00501d24,1,param_1);
  *(int **)(param_1 + 0x50c) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  iVar1 = *(int *)(param_1 + 0x50c);
  *(int *)(iVar1 + 0x224) = param_1;
  *(undefined1 **)(iVar1 + 0x220) = &LAB_00503fc0;
  *(int *)(iVar1 + 0x22c) = param_1;
  *(undefined1 **)(iVar1 + 0x228) = &LAB_005040e0;
  FUN_00466128(iVar1,0);
  FUN_004070b8(0xffffffff,0xffffffff,&local_10);
  *(undefined4 *)(param_1 + 0x4f4) = local_10;
  *(undefined4 *)(param_1 + 0x4f8) = local_c;
  *(undefined4 *)(param_1 + 0x534) = 0;
  FUN_004070b8(0xffffffff,0xffffffff,&local_10);
  *(undefined4 *)(param_1 + 0x538) = local_10;
  *(undefined4 *)(param_1 + 0x53c) = local_c;
  *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
  FUN_004663cc(param_1,0);
  FUN_004663a8(param_1,0xff000005);
  FUN_00404ff0(param_1 + 0x574);
  uVar3 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  *(undefined4 *)(param_1 + 0x578) = uVar3;
  FUN_0043b234(uVar3,0);
  FUN_0043b254(*(undefined4 *)(param_1 + 0x578));
  FUN_0043b244(*(undefined4 *)(param_1 + 0x578),700);
  *(undefined4 *)(param_1 + 0x514) = 0;
  FUN_004070b8(0xffffffff,0xffffffff,&local_10);
  *(undefined4 *)(param_1 + 0x548) = local_10;
  *(undefined4 *)(param_1 + 0x54c) = local_c;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x558) = 0;
  FUN_004070b8(0xffffffff,0xffffffff,&local_10);
  *(undefined4 *)(param_1 + 0x55c) = local_10;
  *(undefined4 *)(param_1 + 0x560) = local_c;
  *(undefined4 *)(param_1 + 0x564) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  FUN_004070b8(0xffffffff,0xffffffff,&local_10);
  *(undefined4 *)(param_1 + 0x521) = local_10;
  *(undefined4 *)(param_1 + 0x525) = local_c;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_00503ec4;
  pHVar4 = LoadCursorA(DAT_0066c668,"COLUMNNODRAG");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0xbb9,pHVar4);
  pHVar4 = LoadCursorA(DAT_0066c668,"HORZSPLIT");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,3000,pHVar4);
  pHVar4 = LoadCursorA(DAT_0066c668,"VERTSPLIT");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0xbbb,pHVar4);
  pHVar4 = LoadCursorA(DAT_0066c668,"INDICATORSELECT");
  FUN_0048545c(*(undefined4 *)PTR_DAT_0066b760,0xbbe,pHVar4);
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}

