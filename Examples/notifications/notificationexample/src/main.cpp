/*
 * Copyright 2011 Nokia Corporation. All rights reserved.
 * Nokia and Nokia Connecting People are registered trademarks of Nokia Corporation. 
 * Product and company names mentioned herein may be 
 * trademarks or trade names of their respective owners.
 * Subject to the conditions below, you may, without charge:
 * Use, copy, modify and/or merge copies of this software and 
 * associated documentation files (the software)
 * Publish, distribute, sub-licence and/or sell new software 
 * derived from or incorporating the Software.
 * This file, unmodified, shall be included with all copies or substantial portions
 * of the Software that are distributed in source code form.
 * The Software cannot constitute the primary value of any new software derived 
 * from or incorporating the Software.
 * Any person dealing with the Software shall not misrepresent the source of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION 
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <QApplication>
#include "notificationexample.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NotificationExample app;
    app.show();
    return a.exec();
}

// End of file
