// Address: 0065e700
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm1_Image2MouseMove
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  char cVar1;
  BOOL BVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  LONG local_c;
  LONG local_8;
  
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  FUN_0041c968(param_5,param_4,&local_c);
  pt.y = local_8;
  pt.x = local_c;
  BVar2 = PtInRect((RECT *)&DAT_007c9588,pt);
  if (BVar2 == 0) {
    FUN_0041c968(param_5,param_4,&local_c);
    pt_00.y = local_8;
    pt_00.x = local_c;
    BVar2 = PtInRect((RECT *)&DAT_007c9598,pt_00);
    if (BVar2 == 0) {
      FUN_0041c968(param_5,param_4,&local_c);
      pt_01.y = local_8;
      pt_01.x = local_c;
      BVar2 = PtInRect((RECT *)&DAT_007c95a8,pt_01);
      if (BVar2 == 0) {
        FUN_0041c968(param_5,param_4,&local_c);
        pt_02.y = local_8;
        pt_02.x = local_c;
        BVar2 = PtInRect((RECT *)&DAT_007c95b8,pt_02);
        if ((BVar2 != 0) && (cVar1 = FUN_00651f8c(), cVar1 == '\0')) {
          FUN_00466414(*(undefined4 *)(param_1 + 0x304),CONCAT22(extraout_var_02,0xffeb));
          return;
        }
        FUN_0041c968(param_5,param_4,&local_c);
        pt_03.y = local_8;
        pt_03.x = local_c;
        BVar2 = PtInRect((RECT *)&DAT_007c95c8,pt_03);
        if (BVar2 == 0) {
          FUN_00466414(*(undefined4 *)(param_1 + 0x304),0);
        }
        else {
          FUN_00466414(*(undefined4 *)(param_1 + 0x304),CONCAT22(extraout_var_03,0xffeb));
        }
      }
      else {
        FUN_00466414(*(undefined4 *)(param_1 + 0x304),CONCAT22(extraout_var_01,0xffeb));
      }
    }
    else {
      FUN_00466414(*(undefined4 *)(param_1 + 0x304),CONCAT22(extraout_var_00,0xffeb));
    }
  }
  else {
    FUN_00466414(*(undefined4 *)(param_1 + 0x304),CONCAT22(extraout_var,0xffeb));
  }
  return;
}

