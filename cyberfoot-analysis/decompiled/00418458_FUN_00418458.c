// Address: 00418458
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00418458(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,(int)&uStack_8 + 3);
  return *(undefined1 *)(param_4 * 3 + 0x662546 + (uStack_8 >> 0x18));
}

