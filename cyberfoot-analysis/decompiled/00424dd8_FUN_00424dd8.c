// Address: 00424dd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424dd8(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined4 local_c;
  
  if (DAT_00424e18 != param_2) {
    local_c._2_2_ = (undefined2)((uint)param_3 >> 0x10);
    local_c = CONCAT22(local_c._2_2_,CONCAT11(param_2,param_2)) | 0xf000;
    FUN_004243ec(param_1,(int)&local_c + 1,1);
    if ((local_c & 2) != 0) {
      FUN_00424cfc(param_1,param_3);
    }
  }
  return;
}

