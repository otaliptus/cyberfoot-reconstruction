// Address: 005046e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005046e4(int param_1,LONG *param_2,undefined4 param_3)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  undefined4 uVar1;
  BOOL BVar2;
  RECT *pRVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LONG LVar6;
  LONG LVar7;
  LONG LVar8;
  LONG LVar9;
  RECT local_2c;
  undefined1 local_1c [16];
  
  LVar7 = *param_2;
  LVar9 = param_2[1];
  uVar1 = 0;
  if (*(char *)(param_1 + 700) == '\0') {
    if ((*(byte *)(param_1 + 0x490) & 0x40) != 0) {
      uVar5 = 0;
      uVar4 = 0xffffffff;
      uVar1 = 0xffffffff;
      pRVar3 = &local_2c;
      LVar6 = LVar7;
      LVar8 = LVar9;
      FUN_0050f410(param_1,local_1c,param_3,pRVar3,0xffffffff,0xffffffff,0);
      FUN_004e5390(PTR_DAT_004e5104,local_1c,0,pRVar3,uVar1,uVar4,uVar5);
      pt.y = LVar8;
      pt.x = LVar6;
      BVar2 = PtInRect(&local_2c,pt);
      if (BVar2 != 0) {
        return 3;
      }
    }
    if ((*(byte *)(param_1 + 0x491) & 1) != 0) {
      uVar5 = 0;
      uVar4 = 0xffffffff;
      uVar1 = 0xffffffff;
      pRVar3 = &local_2c;
      LVar6 = LVar7;
      LVar8 = LVar9;
      FUN_0050f4d0(param_1,local_1c);
      FUN_004e5390(PTR_DAT_004e5104,local_1c,0,pRVar3,uVar1,uVar4,uVar5);
      pt_00.y = LVar8;
      pt_00.x = LVar6;
      BVar2 = PtInRect(&local_2c,pt_00);
      if (BVar2 != 0) {
        return 5;
      }
    }
    uVar5 = 0;
    uVar4 = 0xffffffff;
    uVar1 = 0xffffffff;
    pRVar3 = &local_2c;
    LVar6 = LVar7;
    LVar8 = LVar9;
    FUN_0050f004(param_1,local_1c);
    FUN_004e5390(PTR_DAT_004e5104,local_1c,0,pRVar3,uVar1,uVar4,uVar5);
    pt_01.y = LVar8;
    pt_01.x = LVar6;
    BVar2 = PtInRect(&local_2c,pt_01);
    if (BVar2 == 0) {
      if ((*(byte *)(param_1 + 0x490) & 0x10) != 0) {
        uVar5 = 0;
        uVar4 = 0xffffffff;
        uVar1 = 0xffffffff;
        pRVar3 = &local_2c;
        LVar6 = LVar7;
        LVar8 = LVar9;
        FUN_0050f33c(param_1,local_1c);
        FUN_004e5390(PTR_DAT_004e5104,local_1c,0,pRVar3,uVar1,uVar4,uVar5);
        pt_02.y = LVar8;
        pt_02.x = LVar6;
        BVar2 = PtInRect(&local_2c,pt_02);
        if (BVar2 != 0) {
          return 2;
        }
      }
      if ((*(byte *)(param_1 + 0x490) & 0x80) != 0) {
        uVar5 = 0;
        uVar4 = 0xffffffff;
        uVar1 = 0xffffffff;
        pRVar3 = &local_2c;
        FUN_0050f458(param_1,local_1c);
        FUN_004e5390(PTR_DAT_004e5104,local_1c,0,pRVar3,uVar1,uVar4,uVar5);
        pt_03.y = LVar9;
        pt_03.x = LVar7;
        BVar2 = PtInRect(&local_2c,pt_03);
        if (BVar2 != 0) {
          return 4;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (*(char *)(param_1 + 700) == '\x01') {
    if ((*(byte *)(param_1 + 0x490) & 0x40) != 0) {
      uVar5 = 0;
      uVar4 = 0xffffffff;
      uVar1 = 0xffffffff;
      pRVar3 = &local_2c;
      FUN_0050f410(param_1,local_1c,param_3,pRVar3,0xffffffff,0xffffffff,0);
      FUN_004e5390(PTR_DAT_004e5104,local_1c,0,pRVar3,uVar1,uVar4,uVar5);
      pt_04.y = LVar9;
      pt_04.x = LVar7;
      BVar2 = PtInRect(&local_2c,pt_04);
      if (BVar2 != 0) {
        return 3;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

