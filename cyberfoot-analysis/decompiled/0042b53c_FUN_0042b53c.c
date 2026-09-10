// Address: 0042b53c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b53c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  COLORREF color;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0042b67c(param_1,DAT_0042b580);
  color = FUN_00429e64(param_4);
  SetPixel((HDC)param_1[1],param_2,param_3,color);
  (**(code **)(*param_1 + 0xc))();
  return;
}

