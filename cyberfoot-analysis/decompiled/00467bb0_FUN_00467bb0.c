// Address: 00467bb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467bb0(int *param_1,int param_2)

{
  POINT pt;
  BOOL BVar1;
  LONG LStack_24;
  LONG LStack_20;
  RECT RStack_1c;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
    FUN_00466440(param_1,0);
  }
  if ((*(byte *)(param_1 + 0x15) & 2) != 0) {
    *(ushort *)(param_1 + 0x15) = *(ushort *)(param_1 + 0x15) & 0xfffd;
    FUN_004080cc(*(undefined4 *)(param_2 + 8),&LStack_24);
    (**(code **)(*param_1 + 0x44))(param_1,&RStack_1c);
    pt.y = LStack_20;
    pt.x = LStack_24;
    BVar1 = PtInRect(&RStack_1c,pt);
    if (BVar1 != 0) {
      FUN_00403c80(param_1);
    }
  }
  FUN_00467b78(param_1,param_2,0);
  return;
}

